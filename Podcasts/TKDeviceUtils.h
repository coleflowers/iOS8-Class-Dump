/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@interface TKDeviceUtils : NSObject
+(CGRect)adjustedFrameForRect:(CGRect)arg1 ;
+(double)roundToPixel:(double)arg1 ;
+(CGRect)screenRectWithOrientation:(long long)arg1 ;
+(BOOL)isRetina;
+(BOOL)isTallPhone;
+(CGRect)adjustedFrameForRect:(CGRect)arg1 withOrientation:(long long)arg2 ;
+(double)pointToPixel;
+(BOOL)isTouch;
+(BOOL)isShortPhone;
+(BOOL)isPortrait;
+(BOOL)isLandscape;
+(BOOL)isPhone;
+(BOOL)isPad;
+(CGRect)screenRect;
@end
