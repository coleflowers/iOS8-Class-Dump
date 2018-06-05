/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBBBulletinInfo.h>

@class NSString, SBWidgetViewController;

@interface SBBBWidgetBulletinInfo : SBBBBulletinInfo {

	NSString* _identifier;
	double _preferredViewHeight;
	BOOL _visible;
	struct {
		unsigned isPreferredViewHeightValid : 1;
	}  _widgetBulletinInfoFlags;

}

@property (nonatomic,readonly) SBWidgetViewController * representedWidget; 
@property (assign,nonatomic) double preferredViewHeight; 
-(double)heightForReusableViewForBulletinViewController:(id)arg1 layoutMode:(long long)arg2 bulletinLocation:(long long)arg3 ;
-(void)populateReusableView:(id)arg1 ;
-(id)reusableViewIdentifier;
-(id)representedBulletin;
-(id)originalSectionIdentifier;
-(SBWidgetViewController *)representedWidget;
-(void)setPreferredViewHeight:(double)arg1 ;
-(double)preferredViewHeight;
-(void)dealloc;
-(id)identifier;
-(Class)reusableViewClass;
-(id)widgetIdentifier;
@end
