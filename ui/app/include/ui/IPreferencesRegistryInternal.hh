// Copyright (C) 2011 Rob Caelers <robc@krandor.nl>
// All rights reserved.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef WORKRAVE_UI_IPREFERENCES_REGISTRY_INTERNAL_HH
#define WORKRAVE_UI_IPREFERENCES_REGISTRY_INTERNAL_HH

#include <memory>

#include "ui/prefwidgets/Widget.hh"
#include "ui/IPreferencesRegistry.hh"

class IPreferencesRegistryInternal : public IPreferencesRegistry
{
public:
  using Ptr = std::shared_ptr<IPreferencesRegistryInternal>;

  virtual ~IPreferencesRegistryInternal() = default;

  virtual std::list<std::shared_ptr<ui::prefwidgets::Widget>> get_widgets(PreferencesSection section) const = 0;
};

#endif // WORKRAVE_UI_IPREFERENCES_REGISTRY_INTERNAL_HH
