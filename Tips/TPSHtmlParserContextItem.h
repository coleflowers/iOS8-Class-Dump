/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:30:51 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TPSHtmlParserContextItem : NSObject {

	BOOL _ignoreText;
	unsigned long long _itemType;
	NSMutableDictionary* _attributes;

}

@property (assign,nonatomic) BOOL ignoreText;                               //@synthesize ignoreText=_ignoreText - In the implementation block
@property (assign,nonatomic) unsigned long long itemType;                   //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)itemWithContextItemType:(unsigned long long)arg1 attributes:(id)arg2 ignoreText:(BOOL)arg3 ;
+(id)itemWithContextItemType:(unsigned long long)arg1 attributes:(id)arg2 ;
-(id)initWithContextItemType:(unsigned long long)arg1 attributes:(id)arg2 ignoreText:(BOOL)arg3 ;
-(BOOL)ignoreText;
-(void)setIgnoreText:(BOOL)arg1 ;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(void)setItemType:(unsigned long long)arg1 ;
-(unsigned long long)itemType;
@end
