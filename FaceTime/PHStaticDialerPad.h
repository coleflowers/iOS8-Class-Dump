/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:25:15 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <TelephonyUI/TPPhonePad.h>

@interface PHStaticDialerPad : TPPhonePad {

	int _dialerType;

}

@property (assign) int dialerType;              //@synthesize dialerType=_dialerType - In the implementation block
-(void)setDialerType:(int)arg1 ;
-(id)initWithDialerType:(int)arg1 ;
-(int)dialerType;
-(id)_highlightedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)_keypadImage;
-(float)_yFudge;
-(id)_pressedImage;
@end
