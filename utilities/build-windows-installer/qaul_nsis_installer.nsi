!include "MUI.nsh"

Name "qaul Installer"

!define INSTALLATIONNAME "qaul"
!define SOURCEPATH "..\..\qaul_ui\build\windows\runner\Release\"

OutFile "qaul_2.0a_installer.exe"
InstallDir $PROGRAMFILES\${INSTALLATIONNAME}

!insertmacro MUI_PAGE_LICENSE "${SOURCEPATH}\License.rtf"
!insertmacro MUI_PAGE_COMPONENTS
!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES

!insertmacro MUI_UNPAGE_CONFIRM
!insertmacro MUI_UNPAGE_INSTFILES

!insertmacro MUI_LANGUAGE "English"

Section ""

  SetOutPath $INSTDIR\data\flutter_assets\assets\icons
  File  ${SOURCEPATH}\data\flutter_assets\assets\icons\comment.svg
  File  ${SOURCEPATH}\data\flutter_assets\assets\icons\comments.svg
  File  ${SOURCEPATH}\data\flutter_assets\assets\icons\hashtag.svg
  File  ${SOURCEPATH}\data\flutter_assets\assets\icons\language.svg
  File  ${SOURCEPATH}\data\flutter_assets\assets\icons\network.svg
  File  ${SOURCEPATH}\data\flutter_assets\assets\icons\people.svg

  SetOutPath $INSTDIR\data\flutter_assets\assets\license
  File  ${SOURCEPATH}\data\flutter_assets\assets\license\agpl-3.0.md

  SetOutPath $INSTDIR\data\flutter_assets\fonts
  File  ${SOURCEPATH}\data\flutter_assets\fonts\MaterialIcons-Regular.otf

  SetOutPath $INSTDIR\data\flutter_assets
  File  ${SOURCEPATH}\data\flutter_assets\AssetManifest.json
  File  ${SOURCEPATH}\data\flutter_assets\FontManifest.json
  File  ${SOURCEPATH}\data\flutter_assets\kernel_blob.bin
  File  ${SOURCEPATH}\data\flutter_assets\NOTICES.Z

  SetOutPath $INSTDIR\data\flutter_assets\packages\cupertino_icons\assets
  File  ${SOURCEPATH}\data\flutter_assets\packages\cupertino_icons\assets\CupertinoIcons.ttf

  SetOutPath $INSTDIR\data\flutter_assets\packages\fluent_ui\assets
  File  ${SOURCEPATH}\data\flutter_assets\packages\fluent_ui\assets\AcrylicNoise.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\fluent_ui\fonts\FluentIcons.ttf

  SetOutPath $INSTDIR\data\flutter_assets\packages\flutter_chat_ui\assets\2.0x
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\2.0x\icon-attachment.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\2.0x\icon-delivered.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\2.0x\icon-document.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\2.0x\icon-error.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\2.0x\icon-seen.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\2.0x\icon-send.png

  SetOutPath $INSTDIR\data\flutter_assets\packages\flutter_chat_ui\assets\3.0x
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\3.0x\icon-attachment.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\3.0x\icon-delivered.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\3.0x\icon-document.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\3.0x\icon-error.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\3.0x\icon-seen.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\3.0x\icon-send.png

  SetOutPath $INSTDIR\data\flutter_assets\packages\flutter_chat_ui\assets
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\icon-attachment.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\icon-delivered.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\icon-document.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\icon-error.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\icon-seen.png
  File  ${SOURCEPATH}\data\flutter_assets\packages\flutter_chat_ui\assets\icon-send.png

  SetOutPath $INSTDIR\data\flutter_assets\packages\macos_ui\fonts\SFProTTF
  File  ${SOURCEPATH}\data\flutter_assets\packages\macos_ui\fonts\SFProTTF\SFProText-Regular.ttf

  SetOutPath $INSTDIR\data
  File  ${SOURCEPATH}\data\app.so
  File  ${SOURCEPATH}\data\icudtl.dat

  SetOutPath $INSTDIR
  File  ${SOURCEPATH}\flutter_windows.dll
  File  ${SOURCEPATH}\libqaul.dll
  File  ${SOURCEPATH}\License.rtf
  File  ${SOURCEPATH}\msvcp140.dll
  File  ${SOURCEPATH}\native_context_menu_plugin.dll
  File  ${SOURCEPATH}\qaul.exe
  File  ${SOURCEPATH}\url_launcher_windows_plugin.dll
  File  ${SOURCEPATH}\vcruntime140.dll
  File  ${SOURCEPATH}\vcruntime140_1.dll

  WriteUninstaller $INSTDIR\uninstall.exe

  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${INSTALLATIONNAME}" "DisplayName" "qaul Installer"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${INSTALLATIONNAME}" "UninstallString" '"$INSTDIR\uninstall.exe"'
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${INSTALLATIONNAME}" "NoModify" 1
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${INSTALLATIONNAME}" "NoRepair" 1

SectionEnd

Section "Start Menu Shortcuts"
  CreateDirectory "$SMPROGRAMS\${INSTALLATIONNAME}"
  CreateShortCut "$SMPROGRAMS\${INSTALLATIONNAME}\Uninstall.lnk" "$INSTDIR\uninstall.exe" "" "$INSTDIR\uninstall.exe" 0
  CreateShortCut "$SMPROGRAMS\${INSTALLATIONNAME}\qaul.lnk" "$INSTDIR\qaul.exe" "" "$INSTDIR\qaul.exe" 0
SectionEnd

Section "Uninstall"
  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${INSTALLATIONNAME}"
  Delete $INSTDIR\*.*
  RMDir $INSTDIR
  Delete "$SMPROGRAMS\${INSTALLATIONNAME}\*.*"
  RMDir "$SMPROGRAMS\${INSTALLATIONNAME}"
SectionEnd