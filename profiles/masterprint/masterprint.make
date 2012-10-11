; Core version
; ------------
core = 7.x

; API version
; ------------
api = 2

; Contrib (in Buildkit)
; ------------
projects[context][type] = "module"
projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta2"

projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[devel][version] = "1.2"

projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][version] = "1.0"
projects[features][patch][] = http://drupal.org/files/features_static_caches-1063204-32.patch

; Contrib modules
; ------------
projects[admin][subdir] = contrib
projects[admin][version] = 2.x-dev

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.2

projects[date][subdir] = contrib
projects[date][version] = 2.6

projects[diff][subdir] = contrib
projects[diff][version] = 2.0

projects[entityreference][subdir] = contrib
projects[entityreference][version] = 1.0-rc5

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[views][subdir] = contrib
projects[views][version] = 3.3

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc3

projects[force_password_change][subdir] = contrib
projects[force_password_change][version] = 1.0-rc2

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.2

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.0

projects[profile2][subdir] = contrib
projects[profile2][version] = 1.2

projects[logintoboggan][subdir] = contrib
projects[logintoboggan][version] = 1.3

projects[logintoboggan][subdir] = contrib
projects[logintoboggan][version] = 1.3

projects[token][subdir] = contrib
projects[token][version] = 1.4

projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = 3.0

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.3

projects[migrate][subdir] = contrib
projects[migrate][version] = 2.4

; Themes
; ------------


; Libraries
; ------------
libraries[profile_helper][download][type] = git
libraries[profile_helper][download][url] = git@github.com:kurtzhong/profile_helper.git
libraries[profile_helper][download][branch] = master
