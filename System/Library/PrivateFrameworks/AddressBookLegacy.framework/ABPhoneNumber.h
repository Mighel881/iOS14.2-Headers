/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
@class NSString;

@interface ABPhoneNumber : NSObject {

	SCD_Struct_AB2 _decomposedPhoneNumber;
	char* _phoneNumberBytes;
	NSString* _lastFour;
	NSString* _originalStringValue;

}

@property (readonly) SCD_Struct_AB2* decomposedPhoneNumberPointer; 
@property (readonly) NSString * lastFour;                                       //@synthesize lastFour=_lastFour - In the implementation block
@property (readonly) NSString * originalStringValue;                            //@synthesize originalStringValue=_originalStringValue - In the implementation block
@property (readonly) char* normalizedPhoneChars; 
-(SCD_Struct_AB2*)decomposedPhoneNumberPointer;
-(id)initWithPhoneNumberString:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)lastFour;
-(char*)normalizedPhoneChars;
-(NSString *)originalStringValue;
-(void)dealloc;
@end

