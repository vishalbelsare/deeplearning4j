// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PROPERTIES_ND4J_GRAPH_H_
#define FLATBUFFERS_GENERATED_PROPERTIES_ND4J_GRAPH_H_

#include "flatbuffers/flatbuffers.h"

#include "array_generated.h"

namespace nd4j {
namespace graph {

struct FlatProperties;

struct FlatProperties FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_NAME = 4,
    VT_I = 6,
    VT_L = 8,
    VT_D = 10,
    VT_A = 12
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::Vector<int32_t> *i() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_I);
  }
  const flatbuffers::Vector<int64_t> *l() const {
    return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_L);
  }
  const flatbuffers::Vector<double> *d() const {
    return GetPointer<const flatbuffers::Vector<double> *>(VT_D);
  }
  const flatbuffers::Vector<flatbuffers::Offset<FlatArray>> *a() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatArray>> *>(VT_A);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyOffset(verifier, VT_I) &&
           verifier.Verify(i()) &&
           VerifyOffset(verifier, VT_L) &&
           verifier.Verify(l()) &&
           VerifyOffset(verifier, VT_D) &&
           verifier.Verify(d()) &&
           VerifyOffset(verifier, VT_A) &&
           verifier.Verify(a()) &&
           verifier.VerifyVectorOfTables(a()) &&
           verifier.EndTable();
  }
};

struct FlatPropertiesBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(FlatProperties::VT_NAME, name);
  }
  void add_i(flatbuffers::Offset<flatbuffers::Vector<int32_t>> i) {
    fbb_.AddOffset(FlatProperties::VT_I, i);
  }
  void add_l(flatbuffers::Offset<flatbuffers::Vector<int64_t>> l) {
    fbb_.AddOffset(FlatProperties::VT_L, l);
  }
  void add_d(flatbuffers::Offset<flatbuffers::Vector<double>> d) {
    fbb_.AddOffset(FlatProperties::VT_D, d);
  }
  void add_a(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatArray>>> a) {
    fbb_.AddOffset(FlatProperties::VT_A, a);
  }
  explicit FlatPropertiesBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FlatPropertiesBuilder &operator=(const FlatPropertiesBuilder &);
  flatbuffers::Offset<FlatProperties> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FlatProperties>(end);
    return o;
  }
};

inline flatbuffers::Offset<FlatProperties> CreateFlatProperties(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> i = 0,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> l = 0,
    flatbuffers::Offset<flatbuffers::Vector<double>> d = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatArray>>> a = 0) {
  FlatPropertiesBuilder builder_(_fbb);
  builder_.add_a(a);
  builder_.add_d(d);
  builder_.add_l(l);
  builder_.add_i(i);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<FlatProperties> CreateFlatPropertiesDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const std::vector<int32_t> *i = nullptr,
    const std::vector<int64_t> *l = nullptr,
    const std::vector<double> *d = nullptr,
    const std::vector<flatbuffers::Offset<FlatArray>> *a = nullptr) {
  return nd4j::graph::CreateFlatProperties(
      _fbb,
      name ? _fbb.CreateString(name) : 0,
      i ? _fbb.CreateVector<int32_t>(*i) : 0,
      l ? _fbb.CreateVector<int64_t>(*l) : 0,
      d ? _fbb.CreateVector<double>(*d) : 0,
      a ? _fbb.CreateVector<flatbuffers::Offset<FlatArray>>(*a) : 0);
}

inline const nd4j::graph::FlatProperties *GetFlatProperties(const void *buf) {
  return flatbuffers::GetRoot<nd4j::graph::FlatProperties>(buf);
}

inline bool VerifyFlatPropertiesBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<nd4j::graph::FlatProperties>(nullptr);
}

inline void FinishFlatPropertiesBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<nd4j::graph::FlatProperties> root) {
  fbb.Finish(root);
}

}  // namespace graph
}  // namespace nd4j

#endif  // FLATBUFFERS_GENERATED_PROPERTIES_ND4J_GRAPH_H_