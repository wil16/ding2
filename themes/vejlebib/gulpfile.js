'use strict';

var gulp = require('gulp-help')(require('gulp'));

// Plugins.
var rename = require('gulp-rename');
var sass = require('gulp-sass');

var sassPath = './sass/**/*.scss';

gulp.task('sass', 'Process SCSS using libsass',
  function () {
    // Reference version of compiled files.
    // These can be used for debugging or determining changes.
    gulp.src(sassPath)
      .pipe(sass({
        // The nested output style is the most verbose one.
        outputStyle: 'nested'
      }).on('error', sass.logError))
      .pipe(gulp.dest('./css'));
    // Production version of compiled files. These are used by default.
    gulp.src(sassPath)
      .pipe(sass({
        outputStyle: 'compressed'
      }).on('error', sass.logError))
      // Add a .min to compiled files to separate them from the verbose set.
      .pipe(rename(function (path) {
        path.extname = '.min.css';
      }))
      .pipe(gulp.dest('./css'));
  }
);

gulp.task('watch', 'Watch and process SCSS files', ['sass'],
  function() {
    gulp.watch(sassPath, ['sass']);
  }
);

gulp.task('default', ['help']);
