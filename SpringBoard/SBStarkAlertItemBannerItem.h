/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerItem.h>

@class SBAlertItem, NSString, SBUISound, NSDate;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem {

	SBAlertItem* _alertItem;
	NSString* _title;
	NSString* _message;
	SBUISound* _sound;
	NSDate* _originDate;

}
-(id)sourceDate;
-(long long)defaultActionType;
-(void)reloadDisplayProperties;
-(id)categoryImage;
-(/*^block*/id)ignoreAction;
-(BOOL)matchesContext:(id)arg1 ;
-(id)initWithAlertItem:(id)arg1 ;
-(void)dealloc;
-(/*^block*/id)action;
-(id)title;
-(id)category;
-(unsigned long long)priority;
-(id)sound;
-(id)subActions;
-(BOOL)isSticky;
-(id)subActionLabels;
@end

