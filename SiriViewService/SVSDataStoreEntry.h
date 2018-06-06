/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:59 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SVSDataStoreEntry : NSObject {

	long long _type;
	id _value;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id value;                    //@synthesize value=_value - In the implementation block
-(id)_propertyListStringForType;
-(long long)_typeForPropertyListString:(id)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)_valuePropertyListRepresentation;
-(id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(long long)type;
-(id)value;
-(id)propertyListRepresentation;
@end

