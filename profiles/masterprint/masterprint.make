; Core version
; ------------
core = 7.x

; API version
; ------------
api = 2


; Core project
; ------------
projects[drupal][type] = core
projects[drupal][version] = "7.15"

; Use vocabulary machine name for permissions
; http://drupal.org/node/995156
projects[drupal][patch][995156] = http://drupal.org/files/issues/995156-5_portable_taxonomy_permissions.patch

; Installation profile
; ------------
projects[buildkit][type] = profile
projects[buildkit][download][type] = git
projects[buildkit][download][url] = http://git.drupal.org/project/buildkit.git
projects[buildkit][download][branch] = 7.x-2.x

; Contrib (in Buildkit)
; ------------
projects[admin][type] = "module"
projects[admin][subdir] = "contrib"
projects[admin][version] = "2.0-beta3"

projects[context][type] = "module"
projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta2"

projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.0-rc1"

projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[devel][version] = "1.2"

projects[diff][type] = "module"
projects[diff][subdir] = "contrib"
projects[diff][version] = "2.0"

projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][version] = "1.0-beta4"

; Contrib modules
; ------------
projects[coder][subdir] = contrib
projects[coder][version] = 1.0

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.2

projects[diff][subdir] = contrib
projects[diff][version] = 2.0

projects[openidadmin][subdir] = contrib
projects[openidadmin][version] = 1.0

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[views][subdir] = contrib
projects[views][version] = 3.3


; Themes
; ------------
projects[tao][version] = 3.0-beta4
projects[rubik][version] = 4.0-beta8

; Libraries
; ------------
