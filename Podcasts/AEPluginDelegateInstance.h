/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/AEHelper.h>

@protocol AEInstanceDelegate;
@class NSObject, NSURL, NSString, AEAnnotationProvider;

@interface AEPluginDelegateInstance : NSObject <AEHelper> {

	NSObject*<AEInstanceDelegate> _delegate;
	NSURL* _url;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AEAnnotationProvider * annotationProvider; 
-(AEAnnotationProvider *)annotationProvider;
-(id)helperCoverImage;
-(void)helperViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)helperMetadataForKey:(id)arg1 ;
-(void)helperDeletePersistentCache;
-(void)setMetadata:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 forURL:(id)arg2 ;
-(void)dealloc;
-(id)url;
@end

