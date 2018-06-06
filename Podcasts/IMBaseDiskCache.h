/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/IMCache.h>

@class NSString;

@interface IMBaseDiskCache : NSObject <IMCache> {

	NSString* _basePath;

}

@property (retain) NSString * basePath;                             //@synthesize basePath=_basePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasItemForKey:(id)arg1 ;
-(void)removeItemsWithPrefx:(id)arg1 ;
-(id)allFiles;
-(void)removeItemForKey:(id)arg1 ;
-(id)initWithBasePath:(id)arg1 ;
-(BOOL)isEmpty;
-(void)initialize;
-(void)clearCache;
-(id)pathForKey:(id)arg1 ;
-(void)setBasePath:(NSString *)arg1 ;
-(NSString *)basePath;
@end

