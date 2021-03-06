/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/ADStoreItemJSO_Bindings.h>

@class NSNumber, NSString, NSArray, NSDate, SSItem;

@interface ADStoreItemJSO : ADJavaScriptObject <ADStoreItemJSO_Bindings> {

	int _error;
	NSDate* _expirationDate;
	SSItem* _storeItem;
	NSNumber* _adamId;
	NSString* _title;
	NSArray* _offers;
	NSArray* _previews;

}

@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) int error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SSItem * storeItem;                   //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,readonly) NSNumber * adamId;                  //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * offers;                   //@synthesize offers=_offers - In the implementation block
@property (nonatomic,readonly) NSArray * previews;                 //@synthesize previews=_previews - In the implementation block
-(NSArray *)previews;
-(id)initWithAdamId:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(NSString *)title;
-(SSItem *)storeItem;
-(void)setStoreItem:(SSItem *)arg1 ;
-(void)setError:(int)arg1 ;
-(int)error;
-(NSDate *)expirationDate;
-(NSNumber *)adamId;
-(NSArray *)offers;
-(void)setExpirationDate:(NSDate *)arg1 ;
@end

