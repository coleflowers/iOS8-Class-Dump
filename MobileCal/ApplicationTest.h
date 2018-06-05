/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Application, NSDictionary, CalendarModel;

@interface ApplicationTest : NSObject {

	Application* _application;
	NSDictionary* _options;
	CalendarModel* _model;

}

@property (nonatomic,retain) Application * application;              //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) CalendarModel * model;                  //@synthesize model=_model - In the implementation block
+(id)testName;
-(id)extractInitialDateOption;
-(void)runTest;
-(id)initWithApplication:(id)arg1 model:(id)arg2 options:(id)arg3 ;
-(void)setApplication:(Application *)arg1 ;
-(CalendarModel *)model;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)setModel:(CalendarModel *)arg1 ;
-(Application *)application;
@end
