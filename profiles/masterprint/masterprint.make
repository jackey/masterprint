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
projects[features][version] = "1.0-beta4"

; Contrib modules
; ------------
projects[ctools][subdir] = contrib
projects[ctools][version] = 1.2

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[views][subdir] = contrib
projects[views][version] = 3.3

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc3

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.0

projects[link][subdir] = contrib
projects[link][version] = 1.0

projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = 3.0


; Themes
; ------------
projects[tao][version] = 3.0-beta4

; Libraries
; ------------
