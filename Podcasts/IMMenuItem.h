/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMMenuItem : NSObject {

	NSString* _title;
	id _target;
	SEL _action;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id target;                          //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                         //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) id actionBlock;                //@synthesize actionBlock=_actionBlock - In the implementation block
+(id)menuItemWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
+(id)menuItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)performActionBlock:(id)arg1 ;
-(id)initWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)dealloc;
-(SEL)action;
-(NSString *)title;
-(id)target;
-(id)actionBlock;
@end

