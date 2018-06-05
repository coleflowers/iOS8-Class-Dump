/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBAppVisibilityPreferences : NSObject {

	BOOL _defaultVisible;
	BOOL _currentlyVisible;

}

@property (readonly) BOOL defaultVisible;              //@synthesize defaultVisible=_defaultVisible - In the implementation block
@property (assign) BOOL currentlyVisible;              //@synthesize currentlyVisible=_currentlyVisible - In the implementation block
-(id)initWithDefaultVisible:(BOOL)arg1 ;
-(BOOL)defaultVisible;
-(BOOL)currentlyVisible;
-(void)setCurrentlyVisible:(BOOL)arg1 ;
@end
