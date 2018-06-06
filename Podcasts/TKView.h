/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableDictionary, TKBaseComponent, TKTheme;

@interface TKView : UIView {

	NSMutableDictionary* _eventListeners;
	TKBaseComponent* _component;
	TKTheme* _theme;

}

@property (retain) NSMutableDictionary * eventListeners;              //@synthesize eventListeners=_eventListeners - In the implementation block
@property (retain) TKBaseComponent * component;                       //@synthesize component=_component - In the implementation block
@property (retain) TKTheme * theme;                                   //@synthesize theme=_theme - In the implementation block
+(CGRect)rectForBounds:(CGRect)arg1 withTop:(double)arg2 withTheme:(id)arg3 withComponent:(id)arg4 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 withFrame:(CGRect)arg2 ;
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(NSMutableDictionary *)eventListeners;
-(void)setEventListeners:(NSMutableDictionary *)arg1 ;
-(void)setComponent:(TKBaseComponent *)arg1 ;
-(TKTheme *)theme;
-(void)setTheme:(TKTheme *)arg1 ;
-(TKBaseComponent *)component;
@end

