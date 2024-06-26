<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\SimplifyTautologyTernaryRector\Fixture;

function tautologyTernary()
{
    $fullyQualifiedTypeHint = 1;
    $typeHint = 2;

    $value = ($fullyQualifiedTypeHint !== $typeHint) ? $fullyQualifiedTypeHint : $typeHint;
    $value = ($typeHint !== $fullyQualifiedTypeHint) ? $fullyQualifiedTypeHint : $typeHint;

    $value = ($typeHint === $fullyQualifiedTypeHint) ? $fullyQualifiedTypeHint : $typeHint;
    $value = ($typeHint === $fullyQualifiedTypeHint) ? $typeHint : $fullyQualifiedTypeHint;
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\SimplifyTautologyTernaryRector\Fixture;

function tautologyTernary()
{
    $fullyQualifiedTypeHint = 1;
    $typeHint = 2;

    $value = $fullyQualifiedTypeHint;
    $value = $fullyQualifiedTypeHint;

    $value = $typeHint;
    $value = $fullyQualifiedTypeHint;
}

?>
