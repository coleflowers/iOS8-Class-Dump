/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:15:12 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/FieldTest.app/FieldTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FieldTest/ClassIndex.h>

@class RRC_State, UTRANServingCellInfo, UTRANNeighbhorMeasurements, GSMNeighbhorMeasurements, TRCHBLERMeasurement, CCTRCHSIRMeasurement, PDPContextList, SimInfo;

@interface UTRANClassIndex : ClassIndex {

	RRC_State* rrc_state;
	UTRANServingCellInfo* servingCellInfo;
	UTRANNeighbhorMeasurements* tdMeasurements;
	GSMNeighbhorMeasurements* gsmMeasurements;
	TRCHBLERMeasurement* trchMeasurements;
	CCTRCHSIRMeasurement* cctrchMeasurements;
	PDPContextList* pdpList;
	SimInfo* simInfo;

}
-(void)dealloc;
-(id)init;
@end

