#ifndef DRICONF3_APPLICATION_H
#define DRICONF3_APPLICATION_H

#include <glibmm/ustring.h>
#include <list>
#include "ApplicationOption.h"
#include <memory>

namespace DRI {
    class Application {
    private:
        Glib::ustring name;
        Glib::ustring executable;
        std::list<std::shared_ptr<DRI::ApplicationOption>> options;

    public:
        const Glib::ustring &getName() const;

        void setName(Glib::ustring name);

        const Glib::ustring &getExecutable() const;

        void setExecutable(Glib::ustring executable);

        std::list<std::shared_ptr<DRI::ApplicationOption>> &getOptions();

        void addOption(std::shared_ptr<DRI::ApplicationOption> option);

        void setOptions(std::list<std::shared_ptr<DRI::ApplicationOption>>);
    };
};

#endif
