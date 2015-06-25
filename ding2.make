core = 7.x
api = 2

; Projects
projects[ding_devel][type] = "module"
projects[ding_devel][download][type] = "git"
projects[ding_devel][download][url] = "git@github.com:ding2/ding_devel.git"
projects[ding_devel][download][tag] = "7.x-2.0.0"

projects[openruth][type] = "module"
projects[openruth][download][type] = "git"
projects[openruth][download][url] = "git@github.com:ding2/openruth.git"
projects[openruth][download][tag] = "7.x-2.0.0"

projects[ding_frontend][type] = "module"
projects[ding_frontend][download][type] = "git"
projects[ding_frontend][download][url] = "git@github.com:ding2/ding_frontend.git"
projects[ding_frontend][download][tag] = "7.x-2.0.0"

projects[ding_groups][type] = "module"
projects[ding_groups][download][type] = "git"
projects[ding_groups][download][url] = "git@github.com:ding2/ding_groups.git"
projects[ding_groups][download][tag] = "7.x-2.0.0"

projects[ding_user_frontend][type] = "module"
projects[ding_user_frontend][download][type] = "git"
projects[ding_user_frontend][download][url] = "git@github.com:ding2/ding_user_frontend.git"
projects[ding_user_frontend][download][tag] = "7.x-2.0.0"

projects[ding_ting_frontend][type] = "module"
projects[ding_ting_frontend][download][type] = "git"
projects[ding_ting_frontend][download][url] = "git@github.com:ding2/ding_ting_frontend.git"
projects[ding_ting_frontend][download][tag] = "7.x-2.0.0"

#projects[mkdru_ding_frontend][type] = "module"
#projects[mkdru_ding_frontend][download][type] = "git"
#projects[mkdru_ding_frontend][download][url] = "git@github.com:ding2/mkdru_ding_frontend.git"
#projects[mkdru_ding_frontend][download][tag] = "7.x-2.0.0"

projects[ding_content][type] = "module"
projects[ding_content][download][type] = "git"
projects[ding_content][download][url] = "git@github.com:ding2/ding_content.git"
projects[ding_content][download][tag] = "7.x-2.0.0"

projects[ding_example_content][type] = "module"
projects[ding_example_content][download][type] = "git"
projects[ding_example_content][download][url] = "git@github.com:ding2/ding_example_content.git"
projects[ding_example_content][download][tag] = "7.x-2.0.0"

projects[ding_frontpage][type] = "module"
projects[ding_frontpage][download][type] = "git"
projects[ding_frontpage][download][url] = "git@github.com:ding2/ding_frontpage.git"
projects[ding_frontpage][download][tag] = "7.x-2.0.0"

projects[ding_library][type] = "module"
projects[ding_library][download][type] = "git"
projects[ding_library][download][url] = "git@github.com:ding2/ding_library.git"
projects[ding_library][download][tag] = "7.x-2.0.0"

projects[ding_news][type] = "module"
projects[ding_news][download][type] = "git"
projects[ding_news][download][url] = "git@github.com:ding2/ding_news.git"
projects[ding_news][download][tag] = "7.x-2.0.0"

projects[ding_event][type] = "module"
projects[ding_event][download][type] = "git"
projects[ding_event][download][url] = "git@github.com:ding2/ding_event.git"
projects[ding_event][download][tag] = "7.x-2.0.0"

projects[ding_webtrends][type] = "module"
projects[ding_webtrends][download][type] = "git"
projects[ding_webtrends][download][url] = "git@github.com:ding2/ding_webtrends.git"
projects[ding_webtrends][download][tag] = "7.x-2.0.0"

projects[ding_session_cache][type] = "module"
projects[ding_session_cache][download][type] = "git"
projects[ding_session_cache][download][url] = "git@github.com:ding2/ding_session_cache.git"
projects[ding_session_cache][download][tag] = "7.x-2.0.0"

projects[ding_varnish][type] = "module"
projects[ding_varnish][download][type] = "git"
projects[ding_varnish][download][url] = "git@github.com:ding2/ding_varnish.git"
projects[ding_varnish][download][tag] = "7.x-2.0.0"

projects[ding_contact][type] = "module"
projects[ding_contact][download][type] = "git"
projects[ding_contact][download][url] = "git@github.com:ding2/ding_contact.git"
projects[ding_contact][download][tag] = "7.x-2.0.0"

projects[bpi][type] = "module"
projects[bpi][download][type] = "git"
projects[bpi][download][url] = "git@github.com:ding2/bpi.git"
projects[bpi][download][tag] = "7.x-2.0.0"

projects[ddb_cp][type] = "module"
projects[ddb_cp][download][type] = "git"
projects[ddb_cp][download][url] = "git@github.com:ding2/ddb_cp.git"
projects[ddb_cp][download][tag] = "7.x-2.0.0"

; Base theme
projects[ddbasic][type] = "theme"
projects[ddbasic][download][type] = "git"
projects[ddbasic][download][url] = "git@github.com:ding2/ddbasic.git"
projects[ddbasic][download][tag] = "7.x-2.0.0"

; Libraries
libraries[profiler][download][type] = "git"
libraries[profiler][download][url] = "http://git.drupal.org/project/profiler.git"
libraries[profiler][download][branch] = "7.x-2.0-beta1"
; https://drupal.org/node/1328796, keep dependency order of base profile.
libraries[profiler][patch][0] = "http://drupal.org/files/profiler-reverse.patch"

libraries[mailchimp][download][type] = "get"
libraries[mailchimp][download][url] = "http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip"
libraries[mailchimp][directory_name] = "mailchimp"
libraries[mailchimp][destination] = "libraries"

; DDB Modules that should be removed when FBS is ready
projects[ding_redirect][type] = "module"
projects[ding_redirect][download][type] = "git"
projects[ding_redirect][download][url] = "git@github.com:ding2/ding_redirect.git"
projects[ding_redirect][download][tag] = "7.x-2.0.0"

projects[ding_dummy_provider][type] = "module"
projects[ding_dummy_provider][download][type] = "git"
projects[ding_dummy_provider][download][url] = "git@github.com:ding2/ding_dummy_provider.git"
projects[ding_dummy_provider][download][tag] = "7.x-2.0.0"

; Contrib modules
projects[apc][subdir] = "contrib"
projects[apc][version] = "1.0-beta4"

projects[entitycache][subdir] = "contrib"
projects[entitycache][version] = "1.2"
; https://drupal.org/node/2146543, profile 2 blank fields.
projects[entitycache][patch][0] = "http://drupal.org/files/issues/2146543-ensure-entity-inserts-clears-caches.1.patch"

projects[fontyourface][subdir] = "contrib"
projects[fontyourface][version] = "2.7"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "1.8"

projects[memcache][subdir] = "contrib"
projects[memcache][version] = "1.0"

projects[sslproxy][subdir] = "contrib"
projects[sslproxy][version] = "1.0"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc1"

projects[cookiecontrol][subdir] = "contrib"
projects[cookiecontrol][version] = "1.6"
; https://drupal.org/node/2174955, fix translatable link.
projects[cookiecontrol][patch][0] = "http://drupal.org/files/issues/translatable_link_title-2174955-1.patch"

projects[mailchimp][subdir] = "contrib"
projects[mailchimp][version] = "2.12"

projects[admin_views][subdir] = "contrib"
projects[admin_views][version] = "1.4"

; Using dev release, as the "stable" version is making errors in the install profile.
projects[uuid][subdir] = "contrib"
projects[uuid][download][type] = "git"
projects[uuid][download][url] = "http://git.drupal.org/project/uuid.git"
projects[uuid][download][revision] = "3f4d9fb"

; Development version where the "unpublished" status have been fixed on the content edit page.
projects[view_unpublished][subdir] = "contrib"
projects[view_unpublished][download][type] = "git"
projects[view_unpublished][download][url] = "http://git.drupal.org/project/view_unpublished.git"
projects[view_unpublished][download][revision] = "e9df1d3"

; Vejlebib modules
projects[vejlebib_settings][type] = "module"
projects[vejlebib_settings][download][type] = "git"
projects[vejlebib_settings][download][url] = "git@github.com:vejlebib/vejlebib_settings.git"
projects[vejlebib_settings][download][branch] = "7.x-1.x"

projects[vejlebib_views_panels][type] = "module"
projects[vejlebib_views_panels][download][type] = "git"
projects[vejlebib_views_panels][download][url] = "git@github.com:vejlebib/vejlebib_views_panels.git"
projects[vejlebib_views_panels][download][branch] = "master"

projects[vejlebib_features_overrides][type] = "module"
projects[vejlebib_features_overrides][download][type] = "git"
projects[vejlebib_features_overrides][download][url] = "git@github.com:vejlebib/vejlebib_features_overrides.git"
projects[vejlebib_features_overrides][download][branch] = "master"

projects[ding_opening_hours][type] = "module"
projects[ding_opening_hours][download][type] = "git"
projects[ding_opening_hours][download][url] = "git@github.com:vejlebib/ding_opening_hours.git"
projects[ding_opening_hours][download][branch] = "master"

projects[ding_eresource][type] = "module"
projects[ding_eresource][download][type] = "git"
projects[ding_eresource][download][url] = "git@github.com:vejlebib/ding_eresource.git"
projects[ding_eresource][download][branch] = "master"

projects[ding_redia_bapp][type] = "module"
projects[ding_redia_bapp][download][type] = "git"
projects[ding_redia_bapp][download][url] = "git@github.com:vejlebib/ding_redia_bapp.git"
projects[ding_redia_bapp][download][branch] = "7.x-1.x"

projects[ding_wagnerguide][type] = "module"
projects[ding_wagnerguide][download][type] = "git"
projects[ding_wagnerguide][download][url] = "git@github.com:vejlebib/ding_wagnerguide.git"
projects[ding_wagnerguide][download][branch] = "7.x-1.x"

projects[ting_covers_plus][type] = "module"
projects[ting_covers_plus][download][type] = "git"
projects[ting_covers_plus][download][url] = "git@github.com:vejlebib/ting_covers_plus.git"
projects[ting_covers_plus][download][branch] = "7.x-1.x"

projects[ting_extrasearch][type] = "module"
projects[ting_extrasearch][download][type] = "git"
projects[ting_extrasearch][download][url] = "git@github.com:vejlebib/ting_extrasearch.git"
projects[ting_extrasearch][download][branch] = "7.x-0.x"

projects[ting_visual_relation][type] = "module"
projects[ting_visual_relation][download][type] = "git"
projects[ting_visual_relation][download][url] = "git@github.com:vejlebib/ting_visual_relation.git"
projects[ting_visual_relation][download][branch] = "master"

projects[ask_vopros][type] = "module"
projects[ask_vopros][download][type] = "git"
projects[ask_vopros][download][url] = "git@github.com:Biblioteksvagten/ask_vopros.git"
projects[ask_vopros][download][branch] = "master"

projects[ting_marc][type] = "module"
projects[ting_marc][download][type] = "git"
projects[ting_marc][download][url] = "git@github.com:easyddb/ting_marc"
projects[ting_marc][download][branch] = "master"

; Vejlebib theme
projects[wellejus][type] = "theme"
projects[wellejus][download][type] = "git"
projects[wellejus][download][url] = "git@github.com:vejlebib/wellejus.git"
projects[wellejus][download][branch] = "7.x-1.x"

;-- OVERRIDDEN / FORKED FOR VEJLEBIB --
; Ding User must be vejlebib version with migrated users support
projects[ding_user][type] = "module"
projects[ding_user][download][type] = "git"
projects[ding_user][download][url] = "git@github.com:vejlebib/ding_user.git"
projects[ding_user][download][branch] = "support-user-migrations"

; alma must be vejlebib version with migrated users support
projects[alma][type] = "module"
projects[alma][download][type] = "git"
projects[alma][download][url] = "git@github.com:vejlebib-ding2/alma.git"
projects[alma][download][branch] = "support-user-migrations"

; Some strongarmed variables from DDB CMS is dependent on auto increment ids,
; thus resulting in a permanent overriden features, preventing us from doing
; reverts without also reverting the auto increment dependent variables. 
; An example of this is the role specific settings for autologout moduel from
; ding_base (why not use machine-name?).
; So we have to maintain our own forked version without these problematic 
; strongarmed variables.
projects[ding_base][type] = "module"
projects[ding_base][download][type] = "git"
projects[ding_base][download][url] = "git@github.com:vejlebib/ding_base.git"
projects[ding_base][download][branch] = "vejlebib"

projects[ding_permissions][type] = "module"
projects[ding_permissions][download][type] = "git"
projects[ding_permissions][download][url] = "git@github.com:vejlebib/ding_permissions.git"
projects[ding_permissions][download][branch] = "vejlebib"

projects[ding_staff][type] = "module"
projects[ding_staff][download][type] = "git"
projects[ding_staff][download][url] = "git@github.com:vejlebib/ding_staff.git"
projects[ding_staff][download][branch] = "fix-drush-make-patch-error"
