/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIPageControl.h>

@class UIImage;

@interface WorldClockPageControl : UIPageControl {

	UIImage* _indicator;
	UIImage* _currentIndicator;

}
-(id)initWithFrame:(CGRect)arg1 useNeutralColor:(BOOL)arg2 ;
-(void)dealloc;
-(id)_pageIndicatorImageForPage:(long long)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(long long)arg1 ;
@end

