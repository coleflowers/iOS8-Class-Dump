/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UILegibilitySettings, SBIconPageIndicatorImageSetResult;

@interface SBIconPageIndicatorImageSetCache : NSObject {

	_UILegibilitySettings* _legibilitySettings;
	SBIconPageIndicatorImageSetResult* _indicatorImageSetResults;

}
+(id)homescreenPageIndicatorImageSetCache;
-(id)pageIndicatorImageSetForLegibilitySettings:(id)arg1 ;
-(id)_emptyPageIndicatorSet;
-(void)dealloc;
-(void)setLegibilitySettings:(id)arg1 ;
@end

