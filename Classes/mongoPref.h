//
//  mongoPref.h
//  mongodb.prefpane
//
//  Created by Iv�n Vald�s Castillo on 4/12/10.
//  Copyright (c) 2010 Iv�n Vald�s Castillo, released under the MIT license
//

#import <PreferencePanes/PreferencePanes.h>

@class FFYDaemonController;
@class MBSliderButton;
@class SUUpdater;

@interface mongoPref : NSPreferencePane {
  MBSliderButton *theSlider;
  NSTextField *launchPathTextField;
@private
  FFYDaemonController *daemonController;
  SUUpdater *updater;
}

@property (nonatomic, assign) IBOutlet MBSliderButton	*theSlider;
@property (nonatomic, assign) IBOutlet NSTextField *launchPathTextField;

- (IBAction)startStopDaemon:(id)sender;
- (IBAction)locateBinary:(id)sender;

@end