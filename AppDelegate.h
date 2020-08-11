//
//  AppDelegate.h
//  Monster Copter
//
//  Created by Divij Satija on 14/03/14.
//  Copyright (c) 2014 Divij Satija. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, AVAudioPlayerDelegate> {
    AVAudioPlayer *audioPlayer1;
}


@property (strong, nonatomic) UIWindow *window;

@end
