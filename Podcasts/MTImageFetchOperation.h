/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTNSURLSessionOperation.h>

@class NSMutableData, NSString;

@interface MTImageFetchOperation : MTNSURLSessionOperation {

	NSMutableData* _data;
	NSString* key;

}

@property (nonatomic,retain) NSString * key; 
-(void)processImageWith:(id)arg1 response:(id)arg2 withError:(id)arg3 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)main;
@end

