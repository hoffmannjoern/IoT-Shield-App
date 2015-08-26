#ifndef TALKBACK_H
#define TALKBACK_H

#include <QString>
#include "ApiManager.h"
#include "ApiCommon.h"

namespace ThingSpeak {

class TalkBack
{
public:
    TalkBack(ApiManager &manager, tsid_t id, const QString &apiKey);

    tsid_t addCommand(const QString &commandString, quint64 position = 0);

    /**
     * @brief executeNextCommand Executes the next TalkBack command in the queue.
     * @return Returns the command string.
     */
    QString executeNextCommand();

private:
    ApiManager &manager;
    const tsid_t id;
    const QString apiKey;
};
}

#endif // TALKBACK_H
