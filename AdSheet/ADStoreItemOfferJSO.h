/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdSheet/ADStoreItemOfferJSO_Bindings.h>

@class NSString;

@interface ADStoreItemOfferJSO : NSObject <ADStoreItemOfferJSO_Bindings> {

	BOOL _preorder;
	NSString* _identifier;
	NSString* _price;
	NSString* _action;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * price;                   //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) NSString * action;                  //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL preorder;                      //@synthesize preorder=_preorder - In the implementation block
-(id)initWithSSItemOffer:(id)arg1 ;
-(BOOL)preorder;
-(NSString *)price;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)action;
@end
