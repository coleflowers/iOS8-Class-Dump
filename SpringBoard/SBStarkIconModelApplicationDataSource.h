/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconModelApplicationDataSource.h>

@class NSString;

@interface SBStarkIconModelApplicationDataSource : NSObject <SBIconModelApplicationDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultIconState;
-(BOOL)updateAppIconVisibilityOverridesShowing:(id*)arg1 hiding:(id*)arg2 ;
-(int)appVisibilityOverrideForBundleIdentifier:(id)arg1 ;
-(BOOL)isNewsstandSupported;
-(BOOL)isNewsstandEnabled;
-(id)firstPageLeafIdentifiers;
-(id)allApplications;
@end
