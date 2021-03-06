/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/UTTypeRecord.h>

@class LSBundleRecord;

@interface _UTDeclaredTypeRecord : UTTypeRecord {

	LSBundleRecord* _weakDeclaringBundleRecord;

}

@property (readonly) unsigned _rawFlags; 
@property (readonly) LSBundleRecord * _declaringBundleRecord; 
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(id)pedigree;
-(unsigned)_rawFlags;
-(id)referenceURL;
-(id)_delegatePath;
-(id)declaration;
-(BOOL)isWildcard;
-(BOOL)isExported;
-(BOOL)isImported;
-(BOOL)isCoreType;
-(id)_declaringBundleBookmarkWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)identifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)childTypeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)referenceURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)parentTypeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)versionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)tagSpecificationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_enumerateRelatedTypeStructuresWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(id)_declaringBundleRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_enumerateRelatedTypesWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(void)_LSRecord_resolve__declaringBundleBookmark;
-(id)_localizedDescriptionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(BOOL)isDeclared;
-(id)pedigreeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)declarationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)_declaringBundleBookmark;
-(id)_delegatePathWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_LSRecord_resolve_pedigree;
-(void)_LSRecord_resolve_identifier;
-(unsigned)_rawFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_LSRecord_resolve_tagSpecification;
-(void)_LSRecord_resolve__declaringBundleRecord;
-(id)tagSpecification;
-(BOOL)isInPublicDomain;
-(id)parentTypeIdentifiers;
-(id)childTypeIdentifiers;
-(id)_localizedDescription;
-(id)declaringBundleRecord;
-(LSBundleRecord *)_declaringBundleRecord;
-(void)_LSRecord_resolve__rawFlags;
-(void)_LSRecord_resolve_parentTypeIdentifiers;
-(void)_LSRecord_resolve__delegatePath;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(void)_LSRecord_resolve_childTypeIdentifiers;
-(void)_LSRecord_resolve_version;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(void)_LSRecord_resolve__localizedDescription;
-(BOOL)isDynamic;
-(void)_LSRecord_resolve_declaration;
-(void)_LSRecord_resolve_referenceURL;
-(id)version;
-(id)identifier;
-(BOOL)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

