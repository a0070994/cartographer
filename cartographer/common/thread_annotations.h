#ifndef CARTOGRAPHER_ROS_THREAD_ANNOTATIONS_H
#define CARTOGRAPHER_ROS_THREAD_ANNOTATIONS_H

// These macros are used for thread safety analysis in Clang.
// For GCC or other compilers, we can safely define them as empty.
#ifndef __clang__
#define GUARDED_BY(x)
#define LOCKS_EXCLUDED(x)
#define EXCLUSIVE_LOCKS_REQUIRED(x)
#endif

#endif  // CARTOGRAPHER_ROS_THREAD_ANNOTATIONS_H
