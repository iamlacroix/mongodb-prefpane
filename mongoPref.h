//
//  mongoPref.h
//  mongodb.prefpane
//
//  Created by Iv�n Vald�s Castillo on 4/12/10.
//  Copyright (c) 2010 Iv�n Vald�s Castillo, released under the MIT license
//

#import <PreferencePanes/PreferencePanes.h>
#import "DaemonController.h"

@interface mongoPref : NSPreferencePane 
{
	NSSlider *theSlider;
	DaemonController *dC;
}

@property (nonatomic, retain) IBOutlet NSSlider	*theSlider;

- (void) mainViewDidLoad;
- (void) daemonStopped;
- (void) daemonStarted;
- (IBAction) startStopDaemon:(id)object;

@end

@interface mongoPref(Private)

- (void) checkStatus;

@end
