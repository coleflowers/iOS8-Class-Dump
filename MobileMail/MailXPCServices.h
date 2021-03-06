/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray, NSLock;

@interface MailXPCServices : NSObject {

	NSObject*<OS_xpc_object> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _services;
	NSMutableArray* _connections;
	NSLock* _connectionsLock;

}
+(id)sharedServer;
-(void)registerServiceClass:(Class)arg1 ;
-(void)_registerConnection:(id)arg1 ;
-(void)_enumerateServiceClasses:(/*^block*/id)arg1 ;
-(Class)_serviceClassForName:(id)arg1 ;
-(BOOL)_connection:(id)arg1 hasEntitlement:(id)arg2 ;
-(void)_dispatchMessage:(id)arg1 onQueue:(id)arg2 connectionState:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
@end

