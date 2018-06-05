/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIcon.h>
#import <SpringBoard/NSCopying.h>

@protocol SBLeafIconDataSource;
@class NSString, NSMutableSet;

@interface SBLeafIcon : SBIcon <NSCopying> {

	NSString* _leafIdentifier;
	NSString* _applicationBundleID;
	NSMutableSet* _dataSources;
	id<SBLeafIconDataSource> _activeDataSource;
	id<SBLeafIconDataSource> _dataSourceAtUninstallation;

}
+(Class)safeCategoryTargetClass;
-(void)launchFromLocation:(int)arg1 ;
-(BOOL)iconAppearsInNewsstand;
-(id)leafIdentifier;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(void)addIconDataSource:(id)arg1 ;
-(id)activeDataSource;
-(id)generateIconImage:(int)arg1 ;
-(id)badgeNumberOrString;
-(id)accessoryTextForLocation:(int)arg1 ;
-(void)completeUninstall;
-(BOOL)allowsUninstall;
-(void)setUninstalled;
-(BOOL)launchEnabled;
-(id)nodeIdentifier;
-(void)removeIconDataSourcesOfClass:(Class)arg1 ;
-(id)getGenericIconImage:(int)arg1 ;
-(void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg1 ;
-(void)removeIconDataSource:(id)arg1 ;
-(double)progressPercent;
-(BOOL)progressIsPaused;
-(void)_noteActiveDataSourceDidChangeNotification:(id)arg1 ;
-(void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1 ;
-(void)_noteDataSourceDidInvalidateNotification:(id)arg1 ;
-(void)_updateActiveDataSource;
-(void)_noteActiveDataSourceDidGenerateIconFormat:(int)arg1 ;
-(int)accessoryTypeForLocation:(int)arg1 ;
-(BOOL)isRecentlyUpdated;
-(BOOL)canEllipsizeLabel;
-(BOOL)canTightenLabel;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayName;
-(id)applicationBundleID;
-(BOOL)isBeta;
-(long long)progressState;
@end

