/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:31:52 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <calaccessd/calaccessd-Structs.h>
@class NSString;

@interface ClientIdentity : NSObject {

	int _pid;
	NSString* _bundleIdentifier;
	NSString* _clientName;
	NSString* _codeSigningIdentity;
	SCD_Struct_Cl4 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_Cl4 auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                       //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeSigningIdentity;              //@synthesize codeSigningIdentity=_codeSigningIdentity - In the implementation block
@property (nonatomic,readonly) int pid;                                          //@synthesize pid=_pid - In the implementation block
-(NSString *)codeSigningIdentity;
-(void)dealloc;
-(id)description;
-(NSString *)bundleIdentifier;
-(SCD_Struct_Cl4)auditToken;
-(id)initWithAuditToken:(SCD_Struct_Cl4)arg1 ;
-(int)pid;
-(NSString *)clientName;
@end

