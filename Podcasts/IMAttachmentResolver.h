/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/IMAttachmentResolving.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface IMAttachmentResolver : NSObject <IMAttachmentResolving> {

	NSArray* _resolvers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain,readonly) NSArray * resolvers;                              //@synthesize resolvers=_resolvers - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)supportsAttachmentResolvingOption:(int)arg1 ;
-(void)resolveAttachmentInfo:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)canResolveAttachmentInfo:(id)arg1 ;
-(NSArray *)resolvers;
-(void)_resolveAttachmentInfo:(id)arg1 context:(id)arg2 firstPass:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithResolvers:(id)arg1 ;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
