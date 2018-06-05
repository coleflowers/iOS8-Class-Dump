/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSURL, LocationUsageMixin;

@interface LocationServicesAuthLevelCell : PSTableCell {

	NSURL* _bundleURL;
	BOOL _isWebApp;
	LocationUsageMixin* _location;
	unsigned long long _authLevel;

}

@property (nonatomic,readonly) LocationUsageMixin * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long authLevel;               //@synthesize authLevel=_authLevel - In the implementation block
-(unsigned long long)authLevel;
-(void)dealloc;
-(void)layoutSubviews;
-(LocationUsageMixin *)location;
-(BOOL)canReload;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)getLazyIcon;
-(id)getLazyIconID;
@end
