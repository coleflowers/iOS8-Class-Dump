/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:55:36 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface VideosDetailsTableRow : NSObject {

	NSString* _title;
	id _content;
	NSArray* _columns;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id content;                       //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSArray * columns;              //@synthesize columns=_columns - In the implementation block
+(id)rowWithTitle:(id)arg1 content:(id)arg2 ;
+(id)twoColumnRowWithRows:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)content;
-(NSArray *)columns;
-(void)setContent:(id)arg1 ;
-(void)setColumns:(NSArray *)arg1 ;
@end
