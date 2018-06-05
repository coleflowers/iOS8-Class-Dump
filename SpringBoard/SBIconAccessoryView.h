/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconAccessoryView <SBReusableView>
@required
+(id)checkoutAccessoryImagesForIcon:(id)arg1 location:(int)arg2;
-(void)configureAnimatedForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3 withPreparation:(/*^block*/id)arg4 animation:(/*^block*/id)arg5 completion:(/*^block*/id)arg6;
-(void)configureForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3;
-(CGPoint*)accessoryOriginForIconBounds:(CGRect)arg1;
-(BOOL)displayingAccessory;
-(void)setAccessoryBrightness:(double)arg1;

@end
