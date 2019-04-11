{
  "targets": [
    {
      "target_name": "htmlstrip",
      "sources": [ "htmlstrip.cpp", "htmlstrip_module.cpp" ],
      "include_dirs": [
          "<!(node -e \"require('nan')\")"
      ],
      "cflags": [
        #"-O0 -g3"
      ],
      "conditions": [
        ["OS=='mac'", {
          "xcode_settings": {
            'CLANG_CXX_LIBRARY': 'libc++',
            'CLANG_CXX_LANGUAGE_STANDARD':'c++11',
            'MACOSX_DEPLOYMENT_TARGET':'10.9',
          }
        }],
      ]
    }
  ]
}
