/* This file is part of Clementine.
   Copyright 2014, Arnaud Bienner <arnaud.bienner@gmail.com>
   Copyright 2014, Krzysztof Sobiecki <sobkas@gmail.com>

   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef INTERNET_SOUNDCLOUD_SOUNDCLOUDSETTINGSPAGE_H_
#define INTERNET_SOUNDCLOUD_SOUNDCLOUDSETTINGSPAGE_H_

#include "ui/settingspage.h"

class SoundCloudService;
class Ui_SoundCloudSettingsPage;

class SoundCloudSettingsPage : public SettingsPage {
  Q_OBJECT

 public:
  explicit SoundCloudSettingsPage(SettingsDialog* parent = nullptr);
  ~SoundCloudSettingsPage();

  void Load();
  void Save();

  // QObject
  bool eventFilter(QObject* object, QEvent* event);

 private slots:
  void LoginClicked();
  void LogoutClicked();
  void Connected();

 private:
  Ui_SoundCloudSettingsPage* ui_;

  SoundCloudService* service_;
};

#endif  // INTERNET_SOUNDCLOUD_SOUNDCLOUDSETTINGSPAGE_H_
