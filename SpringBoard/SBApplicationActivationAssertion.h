/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBApplication, NSString;

@interface SBApplicationActivationAssertion : NSObject {

	SBApplication* _app;
	NSString* _name;

}

@property (nonatomic,readonly) SBApplication * application;              //@synthesize app=_app - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
-(id)initWithApplication:(id)arg1 name:(id)arg2 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(SBApplication *)application;
@end

