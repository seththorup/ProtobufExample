# ProtobufExample
Visual Studio 2022 project. Example of create a static protobuf library and referencing it in a client app

Notes:
- Create a Static Library following this as an example https://learn.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-static-library-cpp?view=msvc-170
- Need to install protoc.exe, https://github.com/protocolbuffers/protobuf/releases/tag/v21.12
-- Extract and add the path to the bin folder holding protoc.exe into the windows environment variables
-- Add a pre build event -  protoc.exe -I=$(ProjectDir) --cpp_out=$(ProjectDir) $(ProjectDir)/*.proto
- need to install protobufs on windows https://github.com/protocolbuffers/protobuf/blob/main/src/README.md
-- 'vcpkg install protobuf protobuf:x64-windows'
- Need to compile the library and client as release
- Need to link protobufs as static libraries, https://levelup.gitconnected.com/how-to-statically-link-c-libraries-with-vcpkg-visual-studio-2019-435c2d4ace03
-- Update the vcxproj file
-- change run time library to Multi-threaded (/MT)

