; GSB Panopoly Wysiwyg Override

api = 2
core = 7.x

; Include our Editors

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6/ckeditor_3.6.6.zip

; Features Override 

projects[features_override][version] = 2.x-dev
projects[features_override][subdir] = contrib
projects[features_override][download][type] = git
projects[features_override][download][branch] = 7.x-2.x

