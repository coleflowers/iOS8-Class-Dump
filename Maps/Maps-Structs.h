/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_RA0;

typedef struct {
	SCD_Struct_RA0 origin;
	SCD_Struct_RA0 size;
} SCD_Struct_RA1;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double maximumWidth;
	double maximumHeight;
	unsigned long long maximumNumberOfLines;
} SCD_Struct_In3;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	CGSize field1;
	double field2;
	double field3;
	double field4;
	CGSize field5;
	double field6;
	double field7;
	double field8;
	long long field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	double field16;
	double field17;
	double field18;
	double field19;
	double field20;
	double field21;
	double field22;
	double field23;
	double field24;
	double field25;
	BOOL field26;
	double field27;
	double field28;
	double field29;
	BOOL field30;
	BOOL field31;
} SCD_Struct_MN5;

typedef struct {
	int field1;
	int field2;
	int field3;
	/*function pointer*/void* field4;
} SCD_Struct_Di6;

typedef struct {
	unsigned statusBarHidden : 1;
	unsigned topBarHidden : 1;
	unsigned controlBarHidden : 1;
} SCD_Struct_Di7;

typedef struct {
	double field1;
	int field2;
	int field3;
	SCD_Struct_Di7 field4;
} SCD_Struct_Di8;

typedef struct {
	int field1;
	int field2;
	int field3;
	SCD_Struct_Di7 field4;
} SCD_Struct_Di9;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct __CFString* CFStringRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct {
	int context;
	double distance;
	BOOL useMetric;
	BOOL useYardsForShortDistances;
	BOOL usePrimaryName;
	BOOL useSecondaryName;
	BOOL useDistanceForSecondary;
	BOOL useContinueForSecondary;
	int numPrimarySigns;
	int numSecondarySigns;
} SCD_Struct_MN18;

typedef struct {
	id field1;
	char* field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned field7;
	unsigned long long field8;
	BOOL field9;
	unsigned long long field10;
	float field11;
	unsigned long long field12;
	id field13;
	int field14;
} SCD_Struct_MN19;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_MN20;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_MN21;

typedef struct {
	unsigned short field1[2];
	unsigned short field2[2];
} SCD_Struct_MN22;

typedef struct {
	SCD_Struct_MN20 field1;
	SCD_Struct_MN20 field2;
} SCD_Struct_MN23;

typedef struct {
	SCD_Struct_MN19 field1;
	unsigned long long field2;
	unsigned long long field3;
	int field4;
	int field5;
	int field6;
	unsigned long long field7;
	unsigned long long( field8;
	/*function pointer*/void* field9;
	= field10;
	SCD_Struct_MN21 field11;
	SCD_Struct_MN22) field12;
	/*function pointer*/void* field13;
	SCD_Struct_MN23 field14;
	unsigned char field15;
} SCD_Struct_MN24;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_MN25;

typedef struct {
	unsigned selectedDirectionsResponseIndex : 1;
	unsigned selectedSuggestedRouteIndexInDirectionsResponse : 1;
} SCD_Struct_MN26;

typedef struct {
	int field1;
	int field2;
	SCD_Struct_MN26 field3;
} SCD_Struct_MN27;

typedef struct {
	unsigned field1;
	float field2;
} SCD_Struct_MN28;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
	unsigned field13 : 1;
	unsigned field14 : 1;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
} SCD_Struct_MN29;

typedef struct {
	int field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	BOOL field12;
	BOOL field13;
	BOOL field14;
	BOOL field15;
	BOOL field16;
	BOOL field17;
	SCD_Struct_MN29 field18;
} SCD_Struct_MN30;

typedef struct SBSThermalWarningAssertion* SBSThermalWarningAssertionRef;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_Ma32;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	CGSize referenceSize;
	double arrowStemWidth;
	double intersectionStemWidth;
	double intersectionStrokeWidth;
	CGSize arrowHeadSize;
	double arrowStemCornerRadius;
	double arbitraryCurveRadius;
	double uTurnRadius;
	long long arrowStyle;
	double rightTurnCurveRadius;
	double rightTurnInnerCurveRadius;
	double rightTurnStemLengthBeforeTurn;
	double rightTurnStemLengthAfterTurn;
	double fortyFiveDegreeSouthAngleStemLengthBeforeTurn;
	double fortyFiveDegreeSouthAngleStemLengthAfterTurn;
	double fortyFiveDegreeSouthAngleCornerRadius;
	double fortyFiveDegreeNorthAngleStemLengthBeforeTurn;
	double fortyFiveDegreeNorthAngleStemLengthAfterTurn;
	double fortyFiveDegreeNorthAngleCornerRadius;
	double exitStemLengthBeforeTurn;
	double exitStemLengthAfterTurn;
	double exitRoadNotTakenStemLength;
	double arrivalOuterCircleWidth;
	double arrivalGapBetweenCircles;
	double arrivalGapBetweenArrowAndCircles;
	BOOL arrivalCutOutArrowInInnerCircle;
	double mergeRightStemLengthBeforeTurn;
	double mergeRightStemLengthAfterTurn;
	double mergeRightCornerRadius;
	BOOL junctionsDrawEntryExitRightAngles;
	BOOL junctionsDrawEntryExitFortyFiveDegreeAngles;
} SCD_Struct_MN35;

typedef struct {
	unsigned hasContent : 1;
} SCD_Struct_Ma36;

typedef struct {
	unsigned userInteractionEnabled : 1;
	unsigned canZoom : 1;
	unsigned canScroll : 1;
	unsigned canRotate : 1;
	unsigned canPitch : 1;
} SCD_Struct_Ma37;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __CTFrame* CTFrameRef;

typedef struct __CTFont* CTFontRef;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct {
	id field1;
	unsigned long long field2;
} SCD_Struct_Re42;

typedef struct {
	unsigned searchSessionGUID : 1;
	unsigned obsoleteCid : 1;
	unsigned timestamp : 1;
	unsigned addressID : 1;
	unsigned addressRecordID : 1;
	unsigned flags : 1;
	unsigned obsoleteLatitudeE6Value : 1;
	unsigned obsoleteLongitudeE6Value : 1;
	unsigned resultIndex : 1;
	unsigned searchSequenceNumber : 1;
	unsigned zoomLevel : 1;
	unsigned hasIncompleteMetadata : 1;
	unsigned hasIncompleteNavData : 1;
	unsigned obsoleteClosedListing : 1;
	unsigned obsoleteInexactPosition : 1;
	unsigned obsoleteUnverifiedListing : 1;
} SCD_Struct_Se43;

typedef struct {
	unsigned latitude : 1;
	unsigned latitudeSpan : 1;
	unsigned longitude : 1;
	unsigned longitudeSpan : 1;
	unsigned position : 1;
	unsigned timestamp : 1;
} SCD_Struct_Pe44;

typedef struct {
	unsigned long long field1;
	BOOL field2;
} SCD_Struct_MN45;

typedef struct {
	unsigned businessID : 1;
	unsigned latitude : 1;
	unsigned longitude : 1;
	unsigned regionLatitude : 1;
	unsigned regionLatitudeDelta : 1;
	unsigned regionLongitude : 1;
	unsigned regionLongitudeDelta : 1;
	unsigned directionsMode : 1;
	unsigned providerID : 1;
} SCD_Struct_Sy46;

