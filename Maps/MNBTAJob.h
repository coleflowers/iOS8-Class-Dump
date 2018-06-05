/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, MNBTAJobDelegate;
@class NSObject, NSString;

@interface MNBTAJob : NSObject {

	NSObject*<OS_xpc_object> _job;
	NSString* _name;
	id<MNBTAJobDelegate> _delegate;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> job;                    //@synthesize job=_job - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<MNBTAJobDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithJob:(id)arg1 name:(id)arg2 ;
-(void)setDelegate:(id<MNBTAJobDelegate>)arg1 ;
-(id)description;
-(id<MNBTAJobDelegate>)delegate;
-(NSString *)name;
-(NSObject*<OS_xpc_object>)job;
@end
