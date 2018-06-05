/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SyncingHistoryItem <NSObject,NSCopying,MapsSynced>
@property (nonatomic,readonly) BOOL isValid; 
@property (assign,nonatomic) double position; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@required
-(NSString *)syncIdentifier;
-(void)setSyncIdentifier:(id)arg1;
-(BOOL)isValid;
-(void)setPosition:(double)arg1;
-(double)position;

@end
