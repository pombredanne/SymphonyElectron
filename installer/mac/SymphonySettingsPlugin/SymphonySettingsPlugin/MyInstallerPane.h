//
//  MyInstallerPane.h
//  SymphonySettingsPlugin
//
//  Copyright © 2017 Symphony. All rights reserved.
//

#import <InstallerPlugins/InstallerPlugins.h>

@interface MyInstallerPane : InstallerPane<NSTextFieldDelegate>

@property (weak) IBOutlet NSButton *minimizeOnCloseCheckBox;
@property (weak) IBOutlet NSButton *autoLaunchCheckBox;
@property (weak) IBOutlet NSTextField *podUrlTextBox;
@property (weak) IBOutlet NSButton *alwaysOnTopCheckBox;
@property (weak) IBOutlet NSTextField *podUrlAlertTextBox;

@end
