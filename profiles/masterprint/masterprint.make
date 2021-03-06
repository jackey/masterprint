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
projects[devel][version] = "1.x-dev"

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
projects[views][download][type] = git
projects[views][download][url] = http://git.drupal.org/project/views.git
projects[views][download][revision] = cc9a82a11d393467c0a51e27e5f3937efbf01f5c

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc3

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.2

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.0

projects[print][subdir] = contrib
projects[print][version] = 1.2

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

projects[grammar_parser_lib][subdir] = contrib
projects[grammar_parser_lib][version] = 1.0

projects[views_export_xlsv][subdir] = contrib
projects[views_export_xlsv][version] = 1.0

projects[field_collection][subdir] = contrib
projects[field_collection][version] = 1.0-beta4

; Themes
; ------------
projects[rubik][type] = theme
projects[rubik][type] = 4.0-beta8

projects[tao][type] = theme
projects[tao][type] = 3.0-beta4

; Libraries
; ------------
libraries[profile_helper][download][type] = git
libraries[profile_helper][download][url] = git@github.com:kurtzhong/drupal_profile_helper.git
libraries[profile_helper][download][branch] = master

projects[grammar_parser][type] = library
projects[grammar_parser][download][type] = file
projects[grammar_parser][download][url] = http://ftp.drupal.org/files/projects/grammar_parser-7.x-1.2.tar.gz

