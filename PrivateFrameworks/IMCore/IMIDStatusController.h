/*
* This header is generated by classdump-dyld 1.0
* on Monday, July 30, 2018 at 9:31:40 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRecursiveLock, NSMutableSet;

@interface IMIDStatusController : NSObject {

	NSRecursiveLock* _servicesLock;
	NSMutableSet* _servicesRegistered;

}

@property (nonatomic,retain) NSMutableSet * _servicesRegistered;              //@synthesize servicesRegistered=_servicesRegistered - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * _servicesLock;                 //@synthesize servicesLock=_servicesLock - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(long long)__statusForID:(id)arg1 onService:(id)arg2 isCanonicalized:(BOOL)arg3 ;
-(long long)_idStatusForID:(id)arg1 onService:(id)arg2 ;
-(void)_processIDStatusResponseForURI:(id)arg1 resultStatus:(long long)arg2 forService:(id)arg3 ;
-(void)_requestStatusForID:(id)arg1 onService:(id)arg2 onAccount:(id)arg3 ;
-(long long)_statusForCanonicalizedID:(id)arg1 onService:(id)arg2 ;
-(long long)_idStatusForID:(id)arg1 onAccount:(id)arg2 ;
-(void)requestStatusForID:(id)arg1 onService:(id)arg2 ;
-(void)requestStatusForID:(id)arg1 onAccount:(id)arg2 ;
-(long long)statusForID:(id)arg1 onService:(id)arg2 ;
-(NSRecursiveLock *)_servicesLock;
-(void)set_servicesLock:(NSRecursiveLock *)arg1 ;
-(NSMutableSet *)_servicesRegistered;
-(void)set_servicesRegistered:(NSMutableSet *)arg1 ;
@end

